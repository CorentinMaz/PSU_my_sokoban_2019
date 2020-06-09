# PSU_my_sokoban_2019

<li><strong>Binary name:</strong> my_sokoban</li>
<li><strong>Repository name:</strong> PSU_my_sokoban_2017</li>
<li><strong>Repository rigths:</strong> ramassage-tek</li>
<li><strong>Language:</strong> C</li>
<li><strong>Compilation:</strong> via Makefile, including re, clean and fclean rules</li>

# Subject

Develop a copy of this game in terminal-mode, using the ncurses library.

If all boxes are on storage locations, the player wins and the program must return 0. Otherwise, if none of the boxes can be moved anymore, he loses and the program must return 1.

The game must be reset by pressing the space bar. Redimensioning the terminal must be handled. As long as the terminal is too small to display the whole map, a centered message, asking the user to enlarge the terminal, must be displayed.

The game must be able to be played with the arrow keys (LEFT, RIGHT, UP and DOWN).

A valid map can only contains the characters SPACE, ‘\n’, ‘#’, ‘X’, ‘O’ and ‘P’. If an invalid map is supplied, the program must exit with an error.
