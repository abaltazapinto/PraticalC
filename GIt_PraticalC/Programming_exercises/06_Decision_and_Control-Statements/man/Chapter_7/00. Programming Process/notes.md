Programming is more than writing code. Software has a life cycle . It is born, groows up becomes mature and finally dies. only to be replaced bya newer.

	> Most of programming time is spent modyfing and debuggin existing code.

	> Software does not exist in the vacuum it must be documented, maintained and enhanced, and sold.

The major steps in making a program are:

	> Requirements: Programs start when someone gets an idea and starts to implement it. The requirement document describes, in very general terms, what is wantedd.

	> Program specification: The specification is a description of what the program does.
	IN the beginning a preliminary specification is used to describe what the program is going to do. Later, as the program becomes more refined, sodoes the specification. Finally when the program is finished the specification serves as a complete description of what the program does.

	> Code design. THe programmer does an overall design of the program. The design should include major algoritms, module definitions, file formats, and data structures.

	> Coding: THe next step is writing the program. This step involvesfirst writing a prototype and then filling it to create the full program.

	> Testing: The programmer should design a test plan and then use it to test his program. When possible, the porogrammer should have someone else test the program.

	> Debugging: Unfortunately very few programs work at the first time. 

	> Release

	> Maintenance > Programs are never perfect. Bugs will be found and will need correction. This step is the maintenance phase of programming.

	> Revision && Updating




Prototype 

	After nthe coode design is completed, we can begin writing the program. But rather than try the entire program at at once and then debug it , we will use a method  fast prototyping.

	
Makefile

	After the source has been entered, it need to be compilked and linked. Up until now we have been running the compiler manually. This process is somewhat tedious and prone to error. Also, larger programs consist of many modules and extremely difficult to compile by hand. Fortunately, both UNIX and MS-DOS/Windows have a utility called make that will hadle the details of compilation.

Generic UNIX

File: calc1/makefile.unx

#-----------------------------------------------------------------------#
#									#
#     Makefile for Unix systems						#
#   using a GNU C compiler						#			
#-----------------------------------------------------------------------#

CC=cc
CFLAGS=-g

#Compiler flags
#	-g 	-- Enable debugging

calc1: calc1.c
	$(CC) $(CFLAGS) -o calc1 calc1.c

clean:
	rm -f calc1

WARNING The make utility is repomsible for one the nastiest surprises fir unspecting users. The line:
	$(CC) $(CFlags) -o calc1 calc1.c
	must start with a tab.


make uses the modification dates of the files to determine whether or not a compile is necessary. Compilation creates an object file. The modificatioon date of the object file is later than modification datye of its source. If the source is edited the source modification date is updated, and thenn the object file is then out of date. make checks these dates, and if the source was modified adter the object, make recompiles the object.



Electronic Archaelogy
	Electronic archaerlogy is the art of digging through old code too discover amazing things (like hoow and whyb the code works);

	Unfortunately, most programmers dont start a project at the design step. Insted they are immediately thrust into the maintenance or revision stage and must face the worst possible job: understanding and modyfying soeone else code.
	Many tools are available for examining and formatting code.
	Some of these tools include:
	. Cross references: These programs have names like xref, cxref, and cross. System V Unix has the utility cscope. A cross reference prints out a list of variables and indicates where each variable is used.

	. Program identers. Programs like cb and indent will take a program and indent it correctly (correct identation is something defined by the tool maker)
	
	. Pretty printer. A pretty printer such as vgrind and cprint willl take and typeset it for printing on a laser printer.
	
	. Call graphs. cflow / calls

really nice the game on page 111;

Sodtware lifecycle:

	1- Requirements
	2- Specification
	3- Code design
	4- Coding
	5- Testing
	6- Debugging
	....
