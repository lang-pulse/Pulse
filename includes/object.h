#ifndef pulse_object_h
#define pulse_object_h

#include "common.h"
#include "value.h"
#include "vm.h"

#include <stdio.h>

#define OBJ_TYPE(value)		(AS_OBJ(value)->type)

#define IS_STRING(value)	isObjType(value, OBJ_STRING)

#define AS_STRING(value)	((ObjString*)AS_OBJ(value))
#define AS_CSTRING(value)	(((ObjString*)AS_OBJ(value))->chars)

typedef enum {
	OBJ_STRING,
} ObjType;

struct sObj {
	ObjType type;
	struct sObj* next;
};

struct sObjString {
	Obj obj;
	int length;
	char* chars;
	uint32_t hash;
};

ObjString* takeString(char* chars, int length, VM* vm);
ObjString* copyString(const char* chars, int length, VM* vm);

void printObject(Value value);
void printObjectFile(Value value, FILE* file);

static inline bool isObjType(Value value, ObjType type) {
	return IS_OBJ(value) && AS_OBJ(value)->type == type;
}

#endif
