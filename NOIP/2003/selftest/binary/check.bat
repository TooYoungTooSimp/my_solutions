@echo off
@set PATH=..\..\x64\Debug\;%PATH%
echo Test Case: 1
time<enter
"binary.exe" <"binary1.in" >"_tmpout"
time<enter
fc "_tmpout" "binary1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"binary.exe" <"binary2.in" >"_tmpout"
time<enter
fc "_tmpout" "binary2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"binary.exe" <"binary3.in" >"_tmpout"
time<enter
fc "_tmpout" "binary3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"binary.exe" <"binary4.in" >"_tmpout"
time<enter
fc "_tmpout" "binary4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"binary.exe" <"binary5.in" >"_tmpout"
time<enter
fc "_tmpout" "binary5.out" /W
pause
del _tmpout
echo.

