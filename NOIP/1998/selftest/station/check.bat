@echo off
echo Test Case: 1
time<enter
"..\..\station.exe" <"station1.in" >"_tmpout"
time<enter
fc "_tmpout" "station1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"..\..\station.exe" <"station2.in" >"_tmpout"
time<enter
fc "_tmpout" "station2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"..\..\station.exe" <"station3.in" >"_tmpout"
time<enter
fc "_tmpout" "station3.out" /W
pause
del _tmpout
echo.

