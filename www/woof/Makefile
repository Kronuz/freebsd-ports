# Created by: Dereckson <dereckson@gmail.com>
# $FreeBSD$

PORTNAME=	woof
PORTVERSION=	2012.05.31
CATEGORIES=	www
MASTER_SITES=	http://www.home.unix-ag.org/simon/
DISTNAME=	${PORTNAME}-${PORTVERSION:S/./-/g}
EXTRACT_SUFX=	.py
EXTRACT_ONLY=	# empty

MAINTAINER=	dereckson@gmail.com
COMMENT=	Web Offer One File, an ad-hoc single file webserver

LICENSE=	GPLv2

USE_PYTHON=	yes
NO_BUILD=	yes
PLIST_FILES=	bin/woof

do-extract:
	@${MKDIR} ${WRKSRC}
	@${CP} ${DISTDIR}/${DISTFILES} ${WRKSRC}/${DISTFILES}

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${DISTFILES} ${STAGEDIR}${PREFIX}/bin/woof

.include <bsd.port.mk>
