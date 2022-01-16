
def checkers(cadena):

    # isolate information

    piece_color = cadena.split()[0]
    start_position = cadena.split()[1]
    finish_position = cadena.split()[2]

    # Create and populate matrix

    board = []
    col_id = ["a","b","c","d","e","f","g","h"]

    for i in range(8,0,-1):
        row = []
        for j in range(8):
            if (i + j) % 2 == 0:
                row.append("x")
            else:
                row.append(col_id[j]+str(i))
        board.append(row)

    # if start or finish position are not in the board returns false
    if not (any(start_position in sublist for sublist in board) and any(finish_position in sublist for sublist in board)):
        return False

    # if start and finish position are the same, return true
    if start_position == finish_position:
        return True

    # For the finish position to be on reach, the absolute value of final column - start column must be
    # lesser or equal to the absolute value of final row - start row

    abs_value_row = int(finish_position[1]) - int(start_position[1])
    if abs_value_row < 0:
        abs_value_row *= -1

    abs_value_col = col_id.index(finish_position[0]) - col_id.index(start_position[0])
    if abs_value_col < 0:
        abs_value_col *= -1

    # dark pieces start at top, light pieces at bottom:
    # if the finish position is on the same row or the behind the start position, it cannot be reached

    if piece_color == "L":
        if finish_position[1] > start_position[1] and abs_value_col <= abs_value_row:
            return True
        return False
    elif piece_color == "D":
        if finish_position[1] < start_position[1] and abs_value_col <= abs_value_row:
            return True
        return False
    else:
        return False








