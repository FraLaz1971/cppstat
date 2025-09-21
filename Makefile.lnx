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
all: libstat.a $(TARGET0)$(OEXE) $(TARGET3)$(OEXE)

$(TARGET1)$(OEXT): $(TARGET1).cpp $(TARGET1).h
	$(CXX) -c $<
$(TARGET2)$(OEXT): $(TARGET2).cpp $(TARGET2).h ivstream.h builtin.h
	$(CXX) -c $<
libstat.a: $(TARGET1)$(OEXT) $(TARGET2)$(OEXT)
	ar rcu $@ $^
$(TARGET0)$(EEXT): $(TARGET0).cpp $(TARGET1).h libstat.a
	$(CXX) -o $(TARGET0)$(EEXT) $< $(LDFLAGS) $(LIBS)
$(TARGET3)$(EEXT): $(TARGET3).cpp $(TARGET2).h libstat.a
	$(CXX) -o $(TARGET3)$(EEXT) $< $(LDFLAGS) $(LIBS)
clean:
	$(RM) *.o $(TARGET0)$(EEXT) $(TARGET3)$(EEXT) libstat.a
