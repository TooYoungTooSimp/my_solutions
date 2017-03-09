@echo off
@set PATH=..\..\;..\..\x64\Release;..\..\x64\Debug;%PATH%
echo Test Case: 1
time<enter
"link.exe" <"link1.in" >"_tmpout"
time<enter
fc "_tmpout" "link1.out" /W
pause
del _tmpout
echo.

echo Test Case: 2
time<enter
"link.exe" <"link2.in" >"_tmpout"
time<enter
fc "_tmpout" "link2.out" /W
pause
del _tmpout
echo.

echo Test Case: 3
time<enter
"link.exe" <"link3.in" >"_tmpout"
time<enter
fc "_tmpout" "link3.out" /W
pause
del _tmpout
echo.

echo Test Case: 4
time<enter
"link.exe" <"link4.in" >"_tmpout"
time<enter
fc "_tmpout" "link4.out" /W
pause
del _tmpout
echo.

echo Test Case: 5
time<enter
"link.exe" <"link5.in" >"_tmpout"
time<enter
fc "_tmpout" "link5.out" /W
pause
del _tmpout
echo.

echo Test Case: 6
time<enter
"link.exe" <"link6.in" >"_tmpout"
time<enter
fc "_tmpout" "link6.out" /W
pause
del _tmpout
echo.

echo Test Case: 7
time<enter
"link.exe" <"link7.in" >"_tmpout"
time<enter
fc "_tmpout" "link7.out" /W
pause
del _tmpout
echo.

echo Test Case: 8
time<enter
"link.exe" <"link8.in" >"_tmpout"
time<enter
fc "_tmpout" "link8.out" /W
pause
del _tmpout
echo.

echo Test Case: 9
time<enter
"link.exe" <"link9.in" >"_tmpout"
time<enter
fc "_tmpout" "link9.out" /W
pause
del _tmpout
echo.

echo Test Case: 10
time<enter
"link.exe" <"link10.in" >"_tmpout"
time<enter
fc "_tmpout" "link10.out" /W
pause
del _tmpout
echo.

