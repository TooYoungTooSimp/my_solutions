@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"match.exe" <"match1.in" >"_tmpout"
time<enter
fc "_tmpout" "match1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"match.exe" <"match2.in" >"_tmpout"
time<enter
fc "_tmpout" "match2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"match.exe" <"match3.in" >"_tmpout"
time<enter
fc "_tmpout" "match3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"match.exe" <"match4.in" >"_tmpout"
time<enter
fc "_tmpout" "match4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"match.exe" <"match5.in" >"_tmpout"
time<enter
fc "_tmpout" "match5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"match.exe" <"match6.in" >"_tmpout"
time<enter
fc "_tmpout" "match6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"match.exe" <"match7.in" >"_tmpout"
time<enter
fc "_tmpout" "match7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"match.exe" <"match8.in" >"_tmpout"
time<enter
fc "_tmpout" "match8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"match.exe" <"match9.in" >"_tmpout"
time<enter
fc "_tmpout" "match9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"match.exe" <"match10.in" >"_tmpout"
time<enter
fc "_tmpout" "match10.out" /W
pause
del _tmpout
echo.

