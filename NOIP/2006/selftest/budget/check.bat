@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"budget.exe" <"budget1.in" >"_tmpout"
time<enter
fc "_tmpout" "budget1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"budget.exe" <"budget2.in" >"_tmpout"
time<enter
fc "_tmpout" "budget2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"budget.exe" <"budget3.in" >"_tmpout"
time<enter
fc "_tmpout" "budget3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"budget.exe" <"budget4.in" >"_tmpout"
time<enter
fc "_tmpout" "budget4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"budget.exe" <"budget5.in" >"_tmpout"
time<enter
fc "_tmpout" "budget5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"budget.exe" <"budget6.in" >"_tmpout"
time<enter
fc "_tmpout" "budget6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"budget.exe" <"budget7.in" >"_tmpout"
time<enter
fc "_tmpout" "budget7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"budget.exe" <"budget8.in" >"_tmpout"
time<enter
fc "_tmpout" "budget8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"budget.exe" <"budget9.in" >"_tmpout"
time<enter
fc "_tmpout" "budget9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"budget.exe" <"budget10.in" >"_tmpout"
time<enter
fc "_tmpout" "budget10.out" /W
pause
del _tmpout
echo.

