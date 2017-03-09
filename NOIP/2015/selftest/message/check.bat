@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"message.exe" <"message1.in" >"_tmpout"
time<enter
fc "_tmpout" "message1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"message.exe" <"message2.in" >"_tmpout"
time<enter
fc "_tmpout" "message2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"message.exe" <"message3.in" >"_tmpout"
time<enter
fc "_tmpout" "message3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"message.exe" <"message4.in" >"_tmpout"
time<enter
fc "_tmpout" "message4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"message.exe" <"message5.in" >"_tmpout"
time<enter
fc "_tmpout" "message5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"message.exe" <"message6.in" >"_tmpout"
time<enter
fc "_tmpout" "message6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"message.exe" <"message7.in" >"_tmpout"
time<enter
fc "_tmpout" "message7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"message.exe" <"message8.in" >"_tmpout"
time<enter
fc "_tmpout" "message8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"message.exe" <"message9.in" >"_tmpout"
time<enter
fc "_tmpout" "message9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"message.exe" <"message10.in" >"_tmpout"
time<enter
fc "_tmpout" "message10.out" /W
pause
del _tmpout
echo.

