# Created by: Toni Viemer� <toni.viemero@iki.fi>
# $FreeBSD$

PORTNAME=	makepasswd
PORTVERSION=	1.10
PORTREVISION=	5
CATEGORIES=	security
MASTER_SITES=	${MASTER_SITE_DEBIAN_POOL}
DISTNAME=	${PORTNAME}_${PORTVERSION}.orig

PATCHFILES=	${PORTNAME}_${PORTVERSION}-5.diff.gz
PATCH_SITES=	${MASTER_SITES}
PATCH_SITE_SUBDIR=	${MASTER_SITE_SUBDIR}
PATCH_DIST_STRIP=	-p1

MAINTAINER=	toni.viemero@iki.fi
COMMENT=	Random password generator

LICENSE=	GPLv1

NO_BUILD=	yes
USES=		perl5
USE_PERL5=	run

OPTIONS_DEFINE=	DOCS

RUN_DEPENDS+=	p5-Crypt-PasswdMD5>=0:${PORTSDIR}/security/p5-Crypt-PasswdMD5 \
		p5-Crypt-OpenSSL-Random>=0:${PORTSDIR}/security/p5-Crypt-OpenSSL-Random

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

PLIST_FILES=	bin/${PORTNAME} man/man1/${PORTNAME}.1.gz
PORTDOCS=		CHANGES README

post-patch:
	${REINPLACE_CMD} -e "s/use	bytes;/#use	bytes;/" ${WRKSRC}/makepasswd

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/makepasswd ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${STAGEDIR}${PREFIX}/man/man1
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for file in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${file} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
