# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD$

PORTNAME=	xfce4-wmdock-plugin
PORTVERSION=	0.6.0
PORTREVISION=	1
CATEGORIES=	x11 xfce
MASTER_SITES=	XFCE/src/panel-plugins/xfce4-wmdock-plugin/0.6
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	WMdock plugin for Xfce

GNU_CONFIGURE=	yes
USES=		gettext gmake libtool pkgconfig tar:bzip2
INSTALLS_ICONS=	yes
USE_GNOME=	gtk20 intltool intlhack libwnck
USE_XFCE=	configenv libgui libutil panel
INSTALLS_ICONS=	yes
USE_XORG=	x11

.include <bsd.port.mk>
