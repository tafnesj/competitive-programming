Regex_Pattern = r'hackerrank'

import re
Test_String = input()
match = re.findall(Regex_Pattern, Test_String)

print("Number of matches :", len(match))