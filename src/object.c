#include <stdio.h>
#include <string.h>

#include "../includes/memory.h"
#include "../includes/object.h"
#include "../includes/table.h"
#include "../includes/value.h"
#include "../includes/vm.h"

#define ALLOCATE_OBJ(type, objectType, vm) \
	(type*)allocateObject(sizeof(type), objectType, vm)

static Obj* allocateObject(size_t size, ObjType type, VM* vm) {
	Obj* object = (Obj*)reallocate(NULL, 0, size);
	object->type = type;

	object->next = vm->objects;
  vm->objects = object;

	return object;
}

static ObjString* allocateString(char* chars, int length, uint32_t hash, VM* vm) {
	ObjString* string = ALLOCATE_OBJ(ObjString, OBJ_STRING, vm);
	string->length = length;
	string->chars = chars;
	string->hash = hash;
	tableSet(&vm->strings, string, NIL_VAL);
	return string;
}

static uint32_t hashString(const char* key, int length) {
	uint32_t hash = 2166136261u;

	for (int i=0;i<length;i++){
		hash ^= key[i];
		hash *= 16777619;
	}

	return hash;
}

ObjString* takeString(char* chars, int length, VM* vm) {
	uint32_t hash = hashString(chars, length);
  ObjString* interned = tableFindString(&vm->strings, chars, length,hash);
	if (interned != NULL) {
  	FREE_ARRAY(char, chars, length + 1);
  	return interned;
	}

  return allocateString(chars, length, hash, vm);
}

ObjString* copyString(const char* chars, int length, VM* vm) {
	uint32_t hash = hashString(chars, length);
	ObjString* interned = tableFindString(&vm->strings, chars, length,hash);
  	if (interned != NULL) return interned;

	char* heapChars = ALLOCATE(char, length+1);
	memcpy(heapChars, chars, length);
	heapChars[length] = '\0';

	return allocateString(heapChars, length, hash, vm);
}

void printObject(Value value) {
	switch (OBJ_TYPE(value)) {
		case OBJ_STRING:
			printf("%s", AS_CSTRING(value));
			break;
	}
}

void printObjectFile(Value value, FILE* file) {
	switch (OBJ_TYPE(value)) {
		case OBJ_STRING:
			fprintf(file, "%s", AS_CSTRING(value));
			break;
	}
}
