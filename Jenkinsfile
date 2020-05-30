pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                cmakeBuild
                    installation: 'Default'
            }
        }
        stage('Test') {
            steps {
                echo 'Testing..'
            }
        }
    }
}