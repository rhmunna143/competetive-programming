name='sakib khan'
name1="sakib khan"
#multiline string
name2="""
sakib
khan
"""
print(name)
#string is sequence of charecter
for char in name2:
    print(char)

print(name[2])
print(name[2:5])
print(name[-2])
print(name[::-1])

#name[2]='r'//is not posible cause it is immutable
if 'khan' in name2:
    print('exist')

print(name.upper())