~Barath
var molarmass_ar36=input("Enter the molar mass of Ar36: ","d")
var ar36_abundance=input("Enter the abundance of Ar36: ","d")
var molarmass_ar38=input("Enter the molar mass of Ar38: ","d")
var ar38_abundance=input("Enter the abundance of Ar38: ","d")
var molarmass_ar40=input("Enter the molar mass of Ar40: ","d")
var ar40_abundance=input("Enter the abundance of Ar40: ","d")
var prod_mass_abundance
prod_mass_abundance=(molarmass_ar36*ar36_abundance)+(molarmass_ar38*ar38_abundance)+(molarmass_ar40*ar40_abundance)
var avg_atomic_mass
avg_atomic_mass=prod_mass_abundance/100
print("")
print("The molar mass of Ar36 is: ",molarmass_ar36)
print(" g/mol")
print("The abundance of Ar36 is: ",ar36_abundance)
print("%")
print("The molar mass of Ar38 is: ",molarmass_ar38)
print(" g/mol")
print("The abundance of Ar38 is: ",ar38_abundance)
print("%")
print("The molar mass of Ar40 is: ",molarmass_ar40)
print(" g/mol")
print("The abundance of Ar40 is: ",ar40_abundance)
print("%")
print("")
print("Therefore, the molar mass of the naturally occuring isotopes of Ar is: ",avg_atomic_mass)
print(" g/mol")