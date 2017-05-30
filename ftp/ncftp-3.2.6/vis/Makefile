# Generated automatically from Makefile.in by configure.
#-----------------------------------------------------------------------------
#
# NcFTP vis makefile for the platform linux-x86_64-glibc2.24, on the host hamburg-thinkpad-t540p.
#
#-----------------------------------------------------------------------------

CC=gcc
CFLAGS=-D_REENTRANT -O2 -W -Wall -Wno-format-y2k
#CC=gcc
#CFLAGS=-O2 -W -Wall -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wshadow -Wbad-function-cast -Wwrite-strings -Wconversion
CPPFLAGS=-I/home/hamburg/allc/ftp/ncftp-3.2.6 -I../libncftp -I../Strn -I../sio -I/home/hamburg/allc/ftp/ncftp-3.2.6 -I/home/hamburg/allc/ftp/ncftp-3.2.6/libncftp -I/home/hamburg/allc/ftp/ncftp-3.2.6/sio -I/home/hamburg/allc/ftp/ncftp-3.2.6/Strn
prefix=/usr/local
exec_prefix=${prefix}
BINDIR=${exec_prefix}/bin
SYSCONFDIR=${prefix}/etc
SOCKS_LIBS=
CURSESLIBS=
LIBS=$(CURSESLIBS)  $(SOCKS_LIBS)
STRIP=strip
LDFLAGS=-L../libncftp -L../Strn -L../sio -L/home/hamburg/allc/ftp/ncftp-3.2.6/libncftp -L/home/hamburg/allc/ftp/ncftp-3.2.6/sio -L/home/hamburg/allc/ftp/ncftp-3.2.6/Strn

# Any -D definitions:
DEFS=-Dvis -DO_S=\"linux-x86_64-glibc2.24\" -DNCFTPPATH=\"$(BINDIR)/ncftp\" -DSYSCONFDIR=\"$(SYSCONFDIR)\" -DHAVE_CONFIG_H -DLINUX=50000 -DLINUX_GLIBC=22400

DPROGS=# ../bin/ncftpbookmarks

all: $(DPROGS)
	-@echo 'Done making NcFTP full-screen utilities.'

../bin/ncftpbookmarks: bmed.c wgets.o wutil.o pref.o preffw.o trace.o util.o bookmark.o version.o bmed.h wgets.h syshdrs.h ../libncftp/libncftp.a
	@/home/hamburg/allc/ftp/ncftp-3.2.6/ccdv $(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) bmed.c wgets.o wutil.o pref.o preffw.o trace.o util.o bookmark.o version.o -o ../bin/ncftpbookmarks $(LDFLAGS) -lncftp -lStrn -lsio $(LIBS)
	-@$(STRIP) ../bin/ncftpbookmarks
	-@/bin/rm -rf ../bin/ncftpbookmarks.dSYM

bookmark.o: ../ncftp/bookmark.c ../ncftp/bookmark.h syshdrs.h
	@/home/hamburg/allc/ftp/ncftp-3.2.6/ccdv $(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) ../ncftp/bookmark.c -c

pref.o: ../ncftp/pref.c ../ncftp/pref.h syshdrs.h
	@/home/hamburg/allc/ftp/ncftp-3.2.6/ccdv $(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) ../ncftp/pref.c -c

preffw.o: ../ncftp/preffw.c ../ncftp/pref.h syshdrs.h
	@/home/hamburg/allc/ftp/ncftp-3.2.6/ccdv $(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) ../ncftp/preffw.c -c

trace.o: ../ncftp/trace.c ../ncftp/trace.h syshdrs.h
	@/home/hamburg/allc/ftp/ncftp-3.2.6/ccdv $(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) ../ncftp/trace.c -c

util.o: ../ncftp/util.c ../ncftp/util.h syshdrs.h
	@/home/hamburg/allc/ftp/ncftp-3.2.6/ccdv $(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) ../ncftp/util.c -c

version.o: ../ncftp/version.c
	@/home/hamburg/allc/ftp/ncftp-3.2.6/ccdv $(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) ../ncftp/version.c -c

wutil.o: wutil.c wutil.h syshdrs.h
	@/home/hamburg/allc/ftp/ncftp-3.2.6/ccdv $(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) wutil.c -c

wgets.o: wgets.c wgets.h syshdrs.h
	@/home/hamburg/allc/ftp/ncftp-3.2.6/ccdv $(CC) $(CFLAGS) $(DEFS) $(CPPFLAGS) wgets.c -c

clean:
	/bin/rm -rf $(DPROGS) *.o core *.pch SunWS_cache

PACKAGE=Makefile.in bmed.c bmed.h syshdrs.h wgets.c wgets.h wutil.c wutil.h

TMPDIR=/tmp
TARDIR=vis

tarcp:
	-@mkdir -p $(TMPDIR)/TAR/$(TARDIR)
	-@chmod ga+r $(PACKAGE)
	-@chmod 755 $(TMPDIR)/TAR/$(TARDIR)
	cp -pr $(PACKAGE) $(TMPDIR)/TAR/$(TARDIR)
