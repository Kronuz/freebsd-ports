# Created by: Sahil Tandon <sahil@tandon.net>
# $FreeBSD$

PORTNAME=	AnyEvent-Twitter
PORTVERSION=	0.64
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Implementation of the Twitter API for AnyEvent

BUILD_DEPENDS=	p5-AnyEvent>=5.34:${PORTSDIR}/devel/p5-AnyEvent \
		p5-AnyEvent-HTTP>=2.12:${PORTSDIR}/www/p5-AnyEvent-HTTP \
		p5-JSON>=2.53:${PORTSDIR}/converters/p5-JSON \
		p5-Net-OAuth>=0.27:${PORTSDIR}/net/p5-Net-OAuth \
		p5-URI>=1.58:${PORTSDIR}/net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
