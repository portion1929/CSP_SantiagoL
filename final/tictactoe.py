def create_board():
    """Creates an empty tic-tac-toe board."""
    board = [" " for _ in range(9)]
    return board

def print_board(board):
    """Prints the tic-tac-toe board."""
    for i in range(0, 9, 3):
        print("|".join(board[i:i+3]))
        if i < 6:
            print("-" * 5)