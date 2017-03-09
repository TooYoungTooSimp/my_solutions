@echo off
echo Test Case: 1
time<enter
"huiwen.exe" <"huiwen1.in" >"_tmpout"
time<enter
fc "_tmpout" "huiwen1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"huiwen.exe" <"huiwen2.in" >"_tmpout"
time<enter
fc "_tmpout" "huiwen2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"huiwen.exe" <"huiwen3.in" >"_tmpout"
time<enter
fc "_tmpout" "huiwen3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"huiwen.exe" <"huiwen4.in" >"_tmpout"
time<enter
fc "_tmpout" "huiwen4.out" /W
pause
del _tmpout
echo.

