@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"mod.exe" <"mod1.in" >"_tmpout"
time<enter
fc "_tmpout" "mod1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"mod.exe" <"mod2.in" >"_tmpout"
time<enter
fc "_tmpout" "mod2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"mod.exe" <"mod3.in" >"_tmpout"
time<enter
fc "_tmpout" "mod3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"mod.exe" <"mod4.in" >"_tmpout"
time<enter
fc "_tmpout" "mod4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"mod.exe" <"mod5.in" >"_tmpout"
time<enter
fc "_tmpout" "mod5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"mod.exe" <"mod6.in" >"_tmpout"
time<enter
fc "_tmpout" "mod6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"mod.exe" <"mod7.in" >"_tmpout"
time<enter
fc "_tmpout" "mod7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"mod.exe" <"mod8.in" >"_tmpout"
time<enter
fc "_tmpout" "mod8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"mod.exe" <"mod9.in" >"_tmpout"
time<enter
fc "_tmpout" "mod9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"mod.exe" <"mod10.in" >"_tmpout"
time<enter
fc "_tmpout" "mod10.out" /W
pause
del _tmpout
echo.

