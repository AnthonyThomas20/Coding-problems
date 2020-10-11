# word is the key
keyword = {"break", "case", "continue", "default", "defer", "else", "for", "func", "goto", "if", "map", "range", "return", "struct", "type", "var"}
u_word = input()
if u_word in keyword:
    print(u_word + " is a keyword")
else:
    print(u_word + " is not a keyword")
