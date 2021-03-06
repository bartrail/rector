<?php

namespace Rector\Doctrine\Tests\Rector\ClassMethod\AddMethodCallBasedParamTypeRector\Fixture;

use Rector\SOLID\Tests\Rector\ClassMethod\UseInterfaceOverImplementationInConstructorRector\Source\Coconut;

class TestingStaticCall
{
    public static function process($name, $id)
    {
    }
}

class CallerClassForStaticCall
{
    public function run()
    {
        $coconut = new Coconut();
        TestingStaticCall::process('hi', $coconut->getId());
    }
}

?>
-----
<?php

namespace Rector\Doctrine\Tests\Rector\ClassMethod\AddMethodCallBasedParamTypeRector\Fixture;

use Rector\SOLID\Tests\Rector\ClassMethod\UseInterfaceOverImplementationInConstructorRector\Source\Coconut;

class TestingStaticCall
{
    public static function process(string $name, \Ramsey\Uuid\UuidInterface $id)
    {
    }
}

class CallerClassForStaticCall
{
    public function run()
    {
        $coconut = new Coconut();
        TestingStaticCall::process('hi', $coconut->getId());
    }
}

?>
