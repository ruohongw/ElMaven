TEMPLATE = subdirs
CONFIG += ordered qt thread
ON_TRAVIS=$$(TRAVIS)

macx{
#    QMAKE_CXX = /usr/local/opt/llvm@3.7/lib/llvm-3.7/bin/clang++
}

SUBDIRS += 3rdparty src tests/MavenTests CrashReporter
