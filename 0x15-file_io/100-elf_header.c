#include <elf.h>
#include "main.h"

void display_error(const char* message)
{
fprintf(stderr, "%s\n", message);
exit(98);
}

void display_elf_header(const char* filename)
{
int fd;
fd = open(filename, O_RDONLY);
if (fd == -1)
{
display_error("Failed to open the file");
}

Elf64_Ehdr elf_header;
if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
{
display_error("Failed to read the ELF header");
}

if (elf_header.e_ident[EI_MAG0] != ELFMAG0 || elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
elf_header.e_ident[EI_MAG2] != ELFMAG2 || elf_header.e_ident[EI_MAG3] != ELFMAG3)
{
display_error("Not a valid ELF file");
}

printf("Magic: %02x %02x %02x %02x\n", elf_header.e_ident[EI_MAG0], elf_header.e_ident[EI_MAG1],
elf_header.e_ident[EI_MAG2], elf_header.e_ident[EI_MAG3]);
printf("Class: %d\n", elf_header.e_ident[EI_CLASS]);
printf("Data: %d\n", elf_header.e_ident[EI_DATA]);
printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);
printf("OS/ABI: %d\n", elf_header.e_ident[EI_OSABI]);
printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
printf("Type: %d\n", elf_header.e_type);
printf("Entry point address: %lx\n", elf_header.e_entry);

close(fd);
}

int main(int argc, char* argv[])
{
if (argc != 2) {
display_error("Usage: elf_header elf_filename");
}

display_elf_header(argv[1]);

return (0);
}
