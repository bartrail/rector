<?php

namespace Rector\Downgrade\Tests\Rector\ArrowFunction\ArrowFunctionToAnonymousFunctionRector\Fixture;

class WithReturnTypeClass
{
    public function run()
    {
        $callable = fn(): string => 'Hello world';
    }
}

?>
-----
<?php

namespace Rector\Downgrade\Tests\Rector\ArrowFunction\ArrowFunctionToAnonymousFunctionRector\Fixture;

class WithReturnTypeClass
{
    public function run()
    {
        $callable = function () : string {
            return 'Hello world';
        };
    }
}

?>
