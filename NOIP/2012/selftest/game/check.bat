@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"game.exe" <"game1.in" >"_tmpout"
time<enter
fc "_tmpout" "game1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"game.exe" <"game2.in" >"_tmpout"
time<enter
fc "_tmpout" "game2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"game.exe" <"game3.in" >"_tmpout"
time<enter
fc "_tmpout" "game3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"game.exe" <"game4.in" >"_tmpout"
time<enter
fc "_tmpout" "game4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"game.exe" <"game5.in" >"_tmpout"
time<enter
fc "_tmpout" "game5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"game.exe" <"game6.in" >"_tmpout"
time<enter
fc "_tmpout" "game6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"game.exe" <"game7.in" >"_tmpout"
time<enter
fc "_tmpout" "game7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"game.exe" <"game8.in" >"_tmpout"
time<enter
fc "_tmpout" "game8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"game.exe" <"game9.in" >"_tmpout"
time<enter
fc "_tmpout" "game9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"game.exe" <"game10.in" >"_tmpout"
time<enter
fc "_tmpout" "game10.out" /W
pause
del _tmpout
echo.

