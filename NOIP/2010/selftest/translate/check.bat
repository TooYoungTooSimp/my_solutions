@echo off
@set PATH=..\..\;%PATH%
echo Test Case: 1
time<enter
"translate.exe" <"translate1.in" >"_tmpout"
time<enter
fc "_tmpout" "translate1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"translate.exe" <"translate2.in" >"_tmpout"
time<enter
fc "_tmpout" "translate2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"translate.exe" <"translate3.in" >"_tmpout"
time<enter
fc "_tmpout" "translate3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"translate.exe" <"translate4.in" >"_tmpout"
time<enter
fc "_tmpout" "translate4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"translate.exe" <"translate5.in" >"_tmpout"
time<enter
fc "_tmpout" "translate5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"translate.exe" <"translate6.in" >"_tmpout"
time<enter
fc "_tmpout" "translate6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"translate.exe" <"translate7.in" >"_tmpout"
time<enter
fc "_tmpout" "translate7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"translate.exe" <"translate8.in" >"_tmpout"
time<enter
fc "_tmpout" "translate8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"translate.exe" <"translate9.in" >"_tmpout"
time<enter
fc "_tmpout" "translate9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"translate.exe" <"translate10.in" >"_tmpout"
time<enter
fc "_tmpout" "translate10.out" /W
pause
del _tmpout
echo.

