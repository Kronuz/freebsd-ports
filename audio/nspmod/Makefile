# Created by: jmg
# $FreeBSD$

PORTNAME=	nspmod
PORTVERSION=	0.1
CATEGORIES=	audio
MASTER_SITES=	${MASTER_SITE_SUNSITE}
MASTER_SITE_SUBDIR=	apps/sound/players

MAINTAINER=	ports@FreeBSD.org
COMMENT=	MOD/S3M/MTM tracker that does its own DSP, uses VoxWare v2.90+

PLIST_FILES=	bin/nspmod man/man1/nspmod.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/nspmod ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/nspmod.1 ${STAGEDIR}${MANPREFIX}/man/man1

.include <bsd.port.mk>
