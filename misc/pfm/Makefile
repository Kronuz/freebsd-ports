# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD$

PORTNAME=	pfm
PORTVERSION=	2.12.3
CATEGORIES=	misc perl5
MASTER_SITES=	SF/p-f-m/${PORTNAME}/${PORTVERSION}

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Terminal (curses)-based file manager written in Perl

LICENSE=	GPLv2

RUN_DEPENDS=	p5-libwww>=5.827:${PORTSDIR}/www/p5-libwww \
		p5-File-Stat-Bits>=1.01:${PORTSDIR}/sysutils/p5-File-Stat-Bits \
		p5-ReadLine-Gnu>=1.09:${PORTSDIR}/devel/p5-ReadLine-Gnu \
		p5-Term-ScreenColor>=1.13:${PORTSDIR}/devel/p5-Term-ScreenColor

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
