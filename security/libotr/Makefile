# $FreeBSD$

PORTNAME=	libotr
PORTVERSION=	4.0.0
PORTREVISION=	4
CATEGORIES=	security net-im net
MASTER_SITES=	https://otr.cypherpunks.ca/ \
		http://www.c-s.li/ports/
DISTFILES=	${DISTNAME}${EXTRACT_SUFX} ${DISTNAME}${EXTRACT_SUFX}.asc
EXTRACT_ONLY=	${DISTNAME}${EXTRACT_SUFX}

MAINTAINER=	cs@FreeBSD.org
COMMENT=	Portable OTR Messaging Library and toolkit

LICENSE=	LGPL21

LIB_DEPENDS=	libgpg-error.so:${PORTSDIR}/security/libgpg-error \
		libgcrypt.so:${PORTSDIR}/security/libgcrypt

CONFLICTS=	libotr3-*

GNU_CONFIGURE=	yes
USES=		libtool pathfix cpe
USE_LDCONFIG=	yes
CPE_VENDOR=	cypherpunks

.include <bsd.port.options.mk>

.if ${OSVERSION} < 1000036 && ${ARCH} == i386
LDFLAGS+=	-lssp_nonshared
.endif

verify: checksum
	gpg --verify ${DISTDIR}/${DISTNAME}${EXTRACT_SUFX}.asc

.include <bsd.port.mk>
