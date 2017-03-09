@echo off
@set PATH=..\..\;%PATH%
echo Test Case: 1
time<enter
"word.exe" <"word1.in" >"_tmpout"
time<enter
fc "_tmpout" "word1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"word.exe" <"word2.in" >"_tmpout"
time<enter
fc "_tmpout" "word2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"word.exe" <"word3.in" >"_tmpout"
time<enter
fc "_tmpout" "word3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"word.exe" <"word4.in" >"_tmpout"
time<enter
fc "_tmpout" "word4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"word.exe" <"word5.in" >"_tmpout"
time<enter
fc "_tmpout" "word5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"word.exe" <"word6.in" >"_tmpout"
time<enter
fc "_tmpout" "word6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"word.exe" <"word7.in" >"_tmpout"
time<enter
fc "_tmpout" "word7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"word.exe" <"word8.in" >"_tmpout"
time<enter
fc "_tmpout" "word8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"word.exe" <"word9.in" >"_tmpout"
time<enter
fc "_tmpout" "word9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"word.exe" <"word10.in" >"_tmpout"
time<enter
fc "_tmpout" "word10.out" /W
pause
del _tmpout
echo.

