# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD$

PORTNAME=	DBIx-Class-BitField
PORTVERSION=	0.13
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Store multiple boolean fields in one integer field

RUN_DEPENDS=	p5-DBIx-Class>=0:${PORTSDIR}/databases/p5-DBIx-Class
BUILD_DEPENDS=	${RUN_DEPENDS}
TEST_DEPENDS=	p5-DBD-SQLite>=0:${PORTSDIR}/databases/p5-DBD-SQLite \
		p5-File-Find-Rule>=0:${PORTSDIR}/devel/p5-File-Find-Rule

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
