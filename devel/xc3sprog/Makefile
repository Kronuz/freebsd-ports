# $FreeBSD$

PORTNAME=	xc3sprog
PORTVERSION=	r769
CATEGORIES=	devel
MASTER_SITES=	http://opsec.eu/src/xc3sprog/

MAINTAINER=	uffe@uffe.org
COMMENT=	Free programmer for Xilinx Spartan S3E Starter Kit

LIB_DEPENDS=	libftdi.so:${PORTSDIR}/devel/libftdi
RUN_DEPENDS=	${LOCALBASE}/sbin/fxload:${PORTSDIR}/misc/fxload

USES=		tar:xz cmake
ALL_TARGET=	xc3sprog

PLIST_FILES=	bin/xc3sprog

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/xc3sprog ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.pre.mk>

.if (${OSVERSION} < 800069)
BROKEN=	doesn't build on FreeBSD prior libusb(8) integration to base system
.endif

.include <bsd.port.post.mk>
