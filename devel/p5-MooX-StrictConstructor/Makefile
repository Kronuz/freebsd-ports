# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD$

PORTNAME=	MooX-StrictConstructor
PORTVERSION=	0.006
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Make your Moo-based object constructors blow up on unknown attributes

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Class-Method-Modifiers>=0:${PORTSDIR}/devel/p5-Class-Method-Modifiers \
		p5-Moo>=1.001000:${PORTSDIR}/devel/p5-Moo \
		p5-strictures>=1:${PORTSDIR}/devel/p5-strictures
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Fatal>=0:${PORTSDIR}/devel/p5-Test-Fatal \
		p5-bareword-filehandles>=0:${PORTSDIR}/devel/p5-bareword-filehandles \
		p5-indirect>=0:${PORTSDIR}/devel/p5-indirect \
		p5-multidimensional>=0:${PORTSDIR}/devel/p5-multidimensional

USE_PERL5=	modbuild
USES=		perl5

.include <bsd.port.mk>
