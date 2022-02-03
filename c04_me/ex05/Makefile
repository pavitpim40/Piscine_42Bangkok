C_FILE = $(shell find . -type f -name '*.c')

C_NOT_MAIN = $(shell find . -type f -name 'ft_*.c')

OUTPUT = $(shell find . -type f -name 'ft_*.c' | xargs basename -s .c)

auto_compile:
	gcc -Wall -Werror -Wextra $(C_FILE) -o $(OUTPUT) && ./$(OUTPUT)
	norminette -R CheckForbiddenSourceHeader $(C_NOT_MAIN)

norm:
	norminette -R CheckForbiddenSourceHeader $(C_NOT_MAIN)
