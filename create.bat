@ECHO OFF

REM Go into the src/ directory
cd src

REM compile main.cpp and give us main.exe
g++ main.cpp -o main

REM Run main (from inside src/) and put the output into
REM image.ppm
main > image.ppm

REM Come back out of the src/ directory (this is useless)
cd ..

REM Let me know when we finish
ECHO Done creating.
