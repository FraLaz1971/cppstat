CC = gcc
CLD = gcc
CXX = g++
LD = g++
CXXFLAGS = -Wall
LDFLAGS = -L.
LIBS = -lstat
OEXT = .o
EEXT =
RM = rm -f
.PHONY: all clean 
TARGET0=histo
TARGET1=samplehistogram
TARGET2=samplestatistic
TARGET3=stat
TARGET4=histo_int
TARGET5=ran8bits
TARGET6=ran8bits_int
all: libstat.a $(TARGET0)$(EEXT) $(TARGET3)$(EEXT) $(TARGET4)$(EEXT) $(TARGET5)$(EEXT) $(TARGET6)$(EEXT)

$(TARGET1)$(OEXT): $(TARGET1).cpp $(TARGET1).h
	$(CXX) -c $<
$(TARGET2)$(OEXT): $(TARGET2).cpp $(TARGET2).h ivstream.h builtin.h
	$(CXX) -c $<
libstat.a: $(TARGET1)$(OEXT) $(TARGET2)$(OEXT)
	ar rcs $@ $^
$(TARGET0)$(EEXT): $(TARGET0).cpp $(TARGET1).h libstat.a
	$(CXX) -o $(TARGET0)$(EEXT) $< $(LDFLAGS) $(LIBS)
$(TARGET3)$(EEXT): $(TARGET3).cpp $(TARGET2).h libstat.a
	$(CXX) -o $(TARGET3)$(EEXT) $< $(LDFLAGS) $(LIBS)
$(TARGET4)$(EEXT): $(TARGET4).cpp $(TARGET2).h libstat.a
	$(CXX) -o $(TARGET4)$(EEXT) $< $(LDFLAGS) $(LIBS)
$(TARGET5)$(EEXT): $(TARGET5).c
	$(CC) -o $(TARGET5)$(EEXT) $<
$(TARGET6)$(EEXT): $(TARGET6).c
	$(CC) -o $(TARGET6)$(EEXT) $<
clean:
	$(RM) *.o $(TARGET0)$(EEXT) $(TARGET3)$(EEXT) $(TARGET4)$(EEXT) $(TARGET5)$(EEXT) $(TARGET6)$(EEXT) libstat.a
