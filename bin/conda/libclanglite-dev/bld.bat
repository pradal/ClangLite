echo ON

scons autowig --prefix=%LIBRARY_PREFIX% -j%CPU_COUNT%
if errorlevel 1 exit 1

echo OFF
