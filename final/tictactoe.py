board = [[1,2,3], [4,5,6], [7,8,9]]
rows =3
cols = 3

def gameboard():
    for x in range(rows):
        print("+---+---+---+")
        print("|", end ="")
        for y in range(cols):
            print("", gameboard[x][y], end="|")
    print("\n+---+---+---+")