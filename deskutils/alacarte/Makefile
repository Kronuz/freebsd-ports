# Created by: FreeBSD GNOME Team
# $FreeBSD$
#    $MCom: ports/deskutils/alacarte/Makefile,v 1.25 2010/03/29 13:19:00 avl Exp $

PORTNAME=	alacarte
PORTVERSION=	0.13.2
PORTREVISION=	3
CATEGORIES=	deskutils gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Editor for the freedesktop.org menu specification

USE_GNOME=	gnomehack gnomeprefix pygnomedesktop intlhack
USES=		gettext gmake pkgconfig python tar:bzip2
INSTALLS_ICONS=	yes
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

post-patch:
	@${REINPLACE_CMD} -e 's|applications.menu|gnome-applications.menu|' \
		${WRKSRC}/Alacarte/MenuEditor.py
	@${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|' \
	    ${WRKSRC}/Alacarte/util.py
	@${REINPLACE_CMD} -e 's|python2.4|${PYTHON_VERSION}|g' \
	    	${WRKSRC}/configure

.include <bsd.port.mk>
