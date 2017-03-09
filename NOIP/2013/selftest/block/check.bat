@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"block.exe" <"block1.in" >"_tmpout"
time<enter
fc "_tmpout" "block1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"block.exe" <"block2.in" >"_tmpout"
time<enter
fc "_tmpout" "block2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"block.exe" <"block3.in" >"_tmpout"
time<enter
fc "_tmpout" "block3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"block.exe" <"block4.in" >"_tmpout"
time<enter
fc "_tmpout" "block4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"block.exe" <"block5.in" >"_tmpout"
time<enter
fc "_tmpout" "block5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"block.exe" <"block6.in" >"_tmpout"
time<enter
fc "_tmpout" "block6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"block.exe" <"block7.in" >"_tmpout"
time<enter
fc "_tmpout" "block7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"block.exe" <"block8.in" >"_tmpout"
time<enter
fc "_tmpout" "block8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"block.exe" <"block9.in" >"_tmpout"
time<enter
fc "_tmpout" "block9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"block.exe" <"block10.in" >"_tmpout"
time<enter
fc "_tmpout" "block10.out" /W
pause
del _tmpout
echo.

