@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"blockade.exe" <"blockade1.in" >"_tmpout"
time<enter
fc "_tmpout" "blockade1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"blockade.exe" <"blockade2.in" >"_tmpout"
time<enter
fc "_tmpout" "blockade2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"blockade.exe" <"blockade3.in" >"_tmpout"
time<enter
fc "_tmpout" "blockade3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"blockade.exe" <"blockade4.in" >"_tmpout"
time<enter
fc "_tmpout" "blockade4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"blockade.exe" <"blockade5.in" >"_tmpout"
time<enter
fc "_tmpout" "blockade5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"blockade.exe" <"blockade6.in" >"_tmpout"
time<enter
fc "_tmpout" "blockade6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"blockade.exe" <"blockade7.in" >"_tmpout"
time<enter
fc "_tmpout" "blockade7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"blockade.exe" <"blockade8.in" >"_tmpout"
time<enter
fc "_tmpout" "blockade8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"blockade.exe" <"blockade9.in" >"_tmpout"
time<enter
fc "_tmpout" "blockade9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"blockade.exe" <"blockade10.in" >"_tmpout"
time<enter
fc "_tmpout" "blockade10.out" /W
pause
del _tmpout
echo.

