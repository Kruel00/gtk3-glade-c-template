## GTK+ 3 Glade C Template

The project is meant to be an easy starting point for any GTK+ 3 project.
Autotools and Cmake were not used because ~~I don't know how they work.~~ they are bloat 😎.
A quirk of this project is that the XML generated by glade is used to
generate a header file, ui_xml.h, which embeds the XML in the final
executable, so that it won't have to be looked for and loaded later. ~~All because i haven't figured out gresource yet...~~

___
### Getting Started:
GTK+ 3.0 library headers and Make are required to build this project. Glade is needed to edit the user interface. GCC or Clang is probably required. This hasn't been tested with Windows and probably isn't portable there yet.

Debian or Ubuntu based linux distro:

```
$ sudo apt install libgtk-3-dev
$ sudo apt install glade
```

The project can be configured in config.mk to set the project's version, name etc. These are then made available to the program as macros.

The following macros are available to the C source files:

    VERSION   //The project's version number
    NAME      //The project's name
    TARGET    //Name without spaces/ executable name
    AUTHOR    //Your name
    COPYRIGHT //A copyright message e.g. "Copyright (c) 2021"


___
#### To build the project, simply run:

	$ make
___
#### To build a debug version with lots of warnings and protections enabled:

	$ make debug
___
#### To install the resulting application run (as root):

	# make install
___
#### To uninstall (as root):
	
	# make uninstall
___
#### You are encouraged to format your code (clang-format required) by running:

	$ make format
___
#### You can clean up project files with:

	$ make clean

___

### Hello World Tutorial:

Edit source/main.c.
Add the following code to the top:
```
#include <stdio.h>	
```

At the bottom of the file, add the following lines:

```
void hello_world()
{
    printf("Hello world!");
}
```

* Now open Glade.
* Click the "Control" button.
* Click GtkButton, then click the blank window in the editor.

* on the "Signals" tab.
In the row that says "clicked", and the column labled "Handler",
type the name of our new function from main.c, hello_world.

* Now from inside the root directory of this project, run:
```
	$ make
	$ ./build/bin/template_app
```
"Hello world!" will print in the terminal every time the window is clicked.

The following more in-depth tutorial was referenced by this project
and is recommended:
https://prognotes.net/gtk-glade-c-programming/
