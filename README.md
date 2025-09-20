# Anvil, a CLI Templater tool

> This project is a heavy work-in-progress and is being developed for educational purposes only. Do not expect frequent updates. There may be severe unpatched security issues throughout its development.

Anvil is a simple C-based CLI tool for custom project templates.
## Installation
Anvil must be built from source. Building it requires CMake 3.15+ and a compiler that supports C99.

### Linux (with `make`)
If you are using a Linux-based distro and you have `make` installed, you can simply run:
```bash
chmod +x build.sh
./build.sh
```
and the project should compile and the binary can be found at `build/anvil`. Move it somewhere in your `$PATH` (e.g. `/usr/local/bin`) so it can be invoked globally.

### Linux & macOS (without `make`)
You can still build manually with CMake:
```bash
cmake -S . -B build
cmake --build build
```
The executable will be in `build/anvil`.

Windows isn't officially supported.

## Usage
> These are all *planned* features, none of those have been fully implemented yet.

The syntax is `anvil <command> <arguments>`. The main available commands are:
- `anvil help [command]` to get a list of available commands. Optionally, you can ask for help about a specific command.
- `anvil new <template_name> <project_name>` to create a new project using a given template.
- `anvil create <template_name> <directory_path>` to create a new template from a given directory.
- `anvil delete <template_name>` to delete a template.
- `anvil list` to list all available templates.