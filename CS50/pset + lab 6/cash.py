from cs50 import get_float
from math import floor

while True:
    dollar = get_float("Change Owed: ")
    cent = floor(dollar * 100)

    if cent > 0:
        break

cent20 = cent // 25
cent10 = (cent % 25) // 10
cent5 = ((cent % 25) % 10) // 5
cent1 = ((cent % 25) % 10) % 5
print(cent20 + cent10 + cent5 + cent1)