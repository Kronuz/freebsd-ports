# Created by: Thomas Gellekum <tg@FreeBSD.org>
# $FreeBSD$

PORTNAME=	xfpovray
PORTVERSION=	1.3.1
PORTREVISION=	12
CATEGORIES=	graphics
MASTER_SITES=	http://www.batse.msfc.nasa.gov/~mallozzi/home/software/xforms/src/ \
		${MASTER_SITE_SUNSITE}
MASTER_SITE_SUBDIR=	apps/graphics/rays/pov

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Graphical interface to POV-Ray

BROKEN=		Fails to link

LIB_DEPENDS=	libforms.so:${PORTSDIR}/x11-toolkits/xforms
RUN_DEPENDS=	povray:${PORTSDIR}/graphics/povray-meta

USES=		imake tar:tgz
USE_XORG=	x11 xext xpm
MAKE_JOBS_UNSAFE=	yes

post-patch:
	@${REINPLACE_CMD} -e "s|%%LOCALBASE%%|${LOCALBASE}|g;" ${WRKSRC}/src/xfpovray.h

.include <bsd.port.mk>
