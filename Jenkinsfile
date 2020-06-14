pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                cmakeBuild buildDir: 'build', buildType: 'Release', generator: 'Unix Makefiles', installation: 'Default'
                dir("build") {
                    sh 'make'
                }
            }
        }
        stage('Test') {
            steps {
                dir("bin") {
                    sh label: '', script: 'for i in *test*; do ./$i --gtest_output="xml:../test/report.xml"; done'
                }
                junit 'test/report.xml'
            }
        }
    }
}