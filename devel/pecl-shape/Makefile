# Created by: Ditesh Shashikant Gathani <ditesh@gathani.org>
# $FreeBSD$

PORTNAME=	shape
PORTVERSION=	0.9.2
PORTREVISION=	1
CATEGORIES=	devel pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PECL extension that wraps libshape

LIB_DEPENDS=	libshp.so:${PORTSDIR}/devel/shapelib

USE_PHP=	yes
USE_PHP_BUILD=	yes
USE_PHPEXT=	yes
PHP_MODNAME=	shp
DEFAULT_PHP_VER=53
IGNORE_WITH_PHP=5

CONFIGURE_ARGS+=--with-shp=${LOCALBASE}

post-patch:
	@${REINPLACE_CMD} -e 's|include/libshp|include|g' ${WRKSRC}/config.m4
	@${REINPLACE_CMD} -e 's|-ldl||g' ${WRKSRC}/config.m4
	@${REINPLACE_CMD} -e 's|include "libshp/|include "|g' ${WRKSRC}/php_shp.h

.include <bsd.port.mk>
