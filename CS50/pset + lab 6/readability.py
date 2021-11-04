import cs50

while True:
    text = input('Text: ')
    index, alphabets, digits, special, sentences,words = 0,0,0,0,0,1

    for i in range(len(text)):
        if (text[i].isalpha()):
            alphabets += 1
        elif (text[i].isnumeric()):
            digits += 1
        elif (text[i] == ' ' and text[i + 1]):
            words += 1
        elif (text[i] == '?' or text[i] == '!' or text[i] == '.'):
            sentences += 1
        else:
            special += 1

    L = float(alphabets / words * 100)


    S = float(sentences / words * 100)

    index = round((float)(0.0588 * L - 0.296 * S - 15.8))

    if (index >= 16):
        print('Grade 16+')
    elif (index < 1):
        print('Before Grade 1')
    else:
        print('Grade ', index)

    break