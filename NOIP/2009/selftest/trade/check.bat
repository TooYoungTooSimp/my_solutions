@echo off
@set PATH=..\..\;%PATH%
echo Test Case: 1
time<enter
"trade.exe" <"trade1.in" >"_tmpout"
time<enter
fc "_tmpout" "trade1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"trade.exe" <"trade2.in" >"_tmpout"
time<enter
fc "_tmpout" "trade2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"trade.exe" <"trade3.in" >"_tmpout"
time<enter
fc "_tmpout" "trade3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"trade.exe" <"trade4.in" >"_tmpout"
time<enter
fc "_tmpout" "trade4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"trade.exe" <"trade5.in" >"_tmpout"
time<enter
fc "_tmpout" "trade5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"trade.exe" <"trade6.in" >"_tmpout"
time<enter
fc "_tmpout" "trade6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"trade.exe" <"trade7.in" >"_tmpout"
time<enter
fc "_tmpout" "trade7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"trade.exe" <"trade8.in" >"_tmpout"
time<enter
fc "_tmpout" "trade8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"trade.exe" <"trade9.in" >"_tmpout"
time<enter
fc "_tmpout" "trade9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"trade.exe" <"trade10.in" >"_tmpout"
time<enter
fc "_tmpout" "trade10.out" /W
pause
del _tmpout
echo.

