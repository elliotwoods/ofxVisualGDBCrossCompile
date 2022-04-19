# Introduction

![screenshot](screenshot.png)

Cross compilation support of openFrameworks for the Raspberry Pi when developing in Windows using VisualGDB / Visual Studio.

Supports:

* Cross compiling
* Remote deployment
* Debugging

Check [https://forum.openframeworks.cc/t/cross-compiling-for-raspberry-pi-from-windows/39645] for more details.

# Recommendations

* Copy the `emptyExample.vcxproj` and `emptyExample.sln` into your project folder.
* Don't try to mix VisualGDB projects/solutions with Win32/x64 projects/solutions (e.g. call is `MyAppGDB.sln`, etc)